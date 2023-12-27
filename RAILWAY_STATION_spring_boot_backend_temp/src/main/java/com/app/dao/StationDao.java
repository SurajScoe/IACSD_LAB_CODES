package com.app.dao;

import org.springframework.data.jpa.repository.JpaRepository;

import com.app.entities.StationS;

public interface StationDao extends JpaRepository<StationS, Long> {

}
