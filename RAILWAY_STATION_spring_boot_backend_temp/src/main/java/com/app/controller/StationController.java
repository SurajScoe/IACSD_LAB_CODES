package com.app.controller;

import javax.validation.Valid;

import org.modelmapper.ModelMapper;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.app.dto.StationDTO;
import com.app.service.RailwayServiceR;
import com.app.service.StationServiceS;

@RestController
@RequestMapping("/station")
public class StationController {
	
	@Autowired
	StationServiceS sService;
	
	@Autowired
	RailwayServiceR rService;

	
	
	@GetMapping
	public ResponseEntity<?> getAllSationsDetails(){
		
		return ResponseEntity.ok(sService.getAllStationDetails());
	}
	
	@PostMapping("/addStation")
	public ResponseEntity<?> addNewStation(@RequestBody @Valid StationDTO SDTO, Long railId){
		
		return ResponseEntity.ok(sService.addNewStation(SDTO,railId));
	}
}
