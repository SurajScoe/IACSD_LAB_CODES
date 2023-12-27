package com.app.service;

import java.util.List;

import com.app.dto.RailwayDTO;

public interface RailwayServiceR {
	public RailwayDTO AddNewRailway(RailwayDTO rail);

	public String deleteRailwayById(Long railId);

	public List<RailwayDTO> getAllRailways();

	public List<RailwayDTO> getRailwayDetailsByType(String type);

	public String updaterailwayDetalis(RailwayDTO rdto);
	
	
}
