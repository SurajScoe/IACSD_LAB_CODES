package com.app.entities;

import java.time.LocalTime;
import java.util.ArrayList;
import java.util.List;

import javax.persistence.CascadeType;
import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.EnumType;
import javax.persistence.Enumerated;
import javax.persistence.FetchType;
import javax.persistence.OneToMany;
import javax.persistence.Table;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import lombok.ToString;

@Entity
@Table(name = "railway")
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@ToString(callSuper = true,exclude = "stations")
public class RailwayR extends BaseEnitity {
	@Column(length=30)
	private String name;
	@Enumerated(EnumType.STRING)
	@Column(length = 20)
	private RailwayType type;
	
	private LocalTime startTime;
	private LocalTime endTime;
	@Column(length = 30)
	private String source;
	@Column(length = 30)
	private String dest;
	
	//Railway------------>*stations
	
	@OneToMany(mappedBy = "railway",cascade = CascadeType.ALL,orphanRemoval = true,fetch = FetchType.EAGER)
	List<StationS> stations = new ArrayList<>();
	
	
	//helper function
	public void addStations(StationS s) {
		stations.add(s);
		s.setRailway(this);
	}
	
	public void removeStations(StationS s) {
		stations.remove(s);
		s.setRailway(null);
	}
}
