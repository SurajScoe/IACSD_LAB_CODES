package com.app.custom_exceptions;

public class ResourceNotFoundExceptions extends RuntimeException {
	public ResourceNotFoundExceptions(String msg) {
		super(msg);
	}
}
