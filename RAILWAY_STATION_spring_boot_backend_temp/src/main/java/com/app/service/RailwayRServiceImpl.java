package com.app.service;

import java.util.List;
import java.util.stream.Collectors;

import javax.transaction.Transactional;

import org.modelmapper.ModelMapper;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.app.custom_exceptions.ResourceNotFoundExceptions;
import com.app.dao.RailwayDao;
import com.app.dto.RailwayDTO;
import com.app.entities.RailwayR;
import com.app.entities.RailwayType;

@Service
@Transactional
public class RailwayRServiceImpl implements RailwayServiceR {
	
	@Autowired
	RailwayDao RDAO;
	
	@Autowired
	ModelMapper mapper;
	
	@Override
	public RailwayDTO AddNewRailway(RailwayDTO rail) {
		RailwayR r = mapper.map(rail, RailwayR.class);
		
		RDAO.save(r);
		
		return mapper.map(r, RailwayDTO.class);
	}

	@Override
	public String deleteRailwayById(Long railId) {
		// TODO Auto-generated method stub
		
		RDAO.deleteById(railId);
		
		return "Deletion successfull";
	}

	@Override
	public List<RailwayDTO> getAllRailways() {
		
		return RDAO.findAll().stream()
		.map(m->mapper.map(m, RailwayDTO.class))
		.collect(Collectors.toList());
	}

	@Override
	public List<RailwayDTO> getRailwayDetailsByType(String type) {
		List<RailwayR> rails = RDAO.findByType(
				RailwayType.valueOf(
						type.toUpperCase()));
		
		return rails.stream()
				.map(m->mapper
						.map(m,
								RailwayDTO
								.class))
				.collect(Collectors.toList());
		
	}

	@Override
	public String updaterailwayDetalis(RailwayDTO rdto) {
		RailwayR r = RDAO
				.findById(rdto.getId())
				.orElseThrow(()->new ResourceNotFoundExceptions("No such trians please enter valid number for updation"));
		
		RDAO.save(mapper.map(rdto, RailwayR.class));
		
		return "Updated successfyully...";
	}
	
	
	

}
