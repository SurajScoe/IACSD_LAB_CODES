package com.app.dto;

import lombok.Getter;
import lombok.Setter;
import lombok.ToString;

@Getter
@Setter
@ToString
public class StationDTO {
	private Long id;
	private String stationCode;
	private String stationName;
	private int NoOfPlatforms;
	
}
