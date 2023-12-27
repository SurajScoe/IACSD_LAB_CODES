package globalexceptionhandle;

import java.util.List;
import java.util.Map;
import java.util.stream.Collectors;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.validation.FieldError;
import org.springframework.web.bind.MethodArgumentNotValidException;
import org.springframework.web.bind.annotation.ExceptionHandler;
import org.springframework.web.bind.annotation.ResponseStatus;

import com.app.custom_exceptions.ResourceNotFoundExceptions;

public class GlobalExcHandling {
	@ExceptionHandler(MethodArgumentNotValidException.class)
	public ResponseEntity<?> hm(MethodArgumentNotValidException e){
		System.out.println("Inside the method arg invalidate "+ e);
		
		List<FieldError> FE = e.getFieldErrors();
		
		Map<String, String> map =
				FE.stream()
				.collect
				(Collectors
				.toMap(FieldError::getField, FieldError::getDefaultMessage));
		
		return ResponseEntity.status(HttpStatus.BAD_REQUEST).body(map);
	}
	
	@ExceptionHandler(ResourceNotFoundExceptions.class)
	@ResponseStatus(value = HttpStatus.NOT_FOUND)
	public String handleRNFE(ResourceNotFoundExceptions e) {
		System.out.println("Inside the res not found exec");
		return (e.getMessage());
	}
	
	@ExceptionHandler(RuntimeException.class)
	@ResponseStatus(value = HttpStatus.INTERNAL_SERVER_ERROR)
	public String handleRTE(RuntimeException e) {
		System.out.println("Inside the runtime exc");
		return (e.getMessage());
	}
}
