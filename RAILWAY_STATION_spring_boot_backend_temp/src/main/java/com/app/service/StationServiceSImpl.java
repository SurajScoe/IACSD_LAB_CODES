package com.app.service;

import java.util.List;
import java.util.stream.Collectors;

import javax.transaction.Transactional;

import org.modelmapper.ModelMapper;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import com.app.custom_exceptions.ResourceNotFoundExceptions;
import com.app.dao.RailwayDao;
import com.app.dao.StationDao;
import com.app.dto.StationDTO;
import com.app.entities.RailwayR;
import com.app.entities.StationS;


@Service
@Transactional
public class StationServiceSImpl implements StationServiceS {

	
	@Autowired
	StationDao SDAO;
	
	@Autowired
	RailwayDao RDAO;
	
	@Autowired
	ModelMapper mapper;
	
	@Override
	public List<StationDTO> getAllStationDetails() {
		// TODO Auto-generated method stub
		return SDAO.findAll()
				.stream()
				.map(m->mapper
				.map(m, StationDTO.class))
				.collect(Collectors.toList());
	}

	@Override
	public StationDTO addNewStation(StationDTO sDTO, Long railId) {
		//1st : DTO to Entity
		StationS s = mapper.map(sDTO, StationS.class);
		
		//get the id of the railway
		RailwayR r = RDAO.findById(railId).orElseThrow(()->new ResourceNotFoundExceptions("Invalide id!!"));
		
		r.addStations(s);
		
		return mapper.map(s, StationDTO.class);
	}

}
