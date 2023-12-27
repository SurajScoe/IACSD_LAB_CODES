package com.app.dto;

import java.time.LocalTime;

import javax.persistence.Column;

import com.app.entities.RailwayType;

import lombok.Getter;
import lombok.Setter;

@Getter
@Setter
public class RailwayDTO {
	private Long id;
	private String name;
	private RailwayType type;
	private LocalTime startTime;
	private LocalTime endTime;
	private String source;
	private String dest;
}
