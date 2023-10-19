package one.digitalinnovation.lab;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.cloud.openfeign.EnableFeignClients;

@EnableFeignClients
@SpringBootApplication
public class Application {
	// JSONSCHEMA2POJO: criar classe a partir de JSON
	public static void main(String[] args) {
		SpringApplication.run(Application.class, args);
	}

}
