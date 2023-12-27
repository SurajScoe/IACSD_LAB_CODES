package com.app.dao;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;

import com.app.dto.RailwayDTO;
import com.app.entities.RailwayR;
import com.app.entities.RailwayType;

public interface RailwayDao extends JpaRepository<RailwayR, Long>{

	List<RailwayR> findByType(RailwayType valueOf);

}
