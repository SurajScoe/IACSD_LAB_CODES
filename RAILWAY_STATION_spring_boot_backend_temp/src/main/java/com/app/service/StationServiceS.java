package com.app.service;

import java.util.List;

import javax.validation.Valid;

import com.app.dto.StationDTO;

public interface StationServiceS {

	 public List<StationDTO> getAllStationDetails();

	public StationDTO addNewStation(StationDTO sDTO, Long railId);
}
