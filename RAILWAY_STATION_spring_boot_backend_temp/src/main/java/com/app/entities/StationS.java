package com.app.entities;

import javax.persistence.Column;
import javax.persistence.Entity;
import javax.persistence.FetchType;
import javax.persistence.JoinColumn;
import javax.persistence.ManyToOne;
import javax.persistence.Table;

import lombok.AllArgsConstructor;
import lombok.Getter;
import lombok.NoArgsConstructor;
import lombok.Setter;
import lombok.ToString;

@Entity
@Table(name = "station")
@Getter
@Setter
@NoArgsConstructor
@AllArgsConstructor
@ToString(callSuper = true,exclude = "railway")
public class StationS extends BaseEnitity {
	@Column(length=20)
	private String stationCode;
	@Column(length = 20)
	private String stationName;
//	@Column(nullable = false)
	private int NoOfPlatforms;
	
	
	//*s------->r
	@ManyToOne(fetch = FetchType.LAZY)
	@JoinColumn(name = "railway_id",nullable = false)
	private RailwayR railway;
}
