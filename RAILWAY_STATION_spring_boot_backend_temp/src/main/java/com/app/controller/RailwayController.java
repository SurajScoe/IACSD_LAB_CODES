package com.app.controller;

import javax.validation.Valid;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.CrossOrigin;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import com.app.dao.RailwayDao;
import com.app.dto.RailwayDTO;
import com.app.service.RailwayServiceR;

import lombok.NoArgsConstructor;

@RestController
@RequestMapping("railways")
@CrossOrigin(origins = "https://localhost:3000")
@NoArgsConstructor
public class RailwayController {
	
	
	
	@Autowired
	RailwayServiceR ServiceR;
	
	@PostMapping("/add")
	public ResponseEntity<?> addnewRailway(@RequestBody @Valid RailwayDTO railway){
		return ResponseEntity.ok(ServiceR.AddNewRailway(railway));
	}
	
	@DeleteMapping("/remove/{railId}")
	public ResponseEntity<?> deleteRailwayById(@PathVariable Long railId){
		return ResponseEntity.ok(ServiceR.deleteRailwayById(railId));
	}
	
	@GetMapping
	public ResponseEntity<?> getAllRailways(){
		return ResponseEntity.ok(ServiceR.getAllRailways());
	}
	
	@GetMapping("/{type}")
	public ResponseEntity<?> getRailwayDetailsByType(@PathVariable String type){
		return ResponseEntity.ok(ServiceR.getRailwayDetailsByType(type));
	}
	
	@PutMapping("/update")
	public ResponseEntity<?> updaterailway(@RequestBody RailwayDTO rdto){
		return ResponseEntity.ok(ServiceR.updaterailwayDetalis(rdto));
	}
}
