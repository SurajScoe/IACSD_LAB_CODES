package utils;

import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

import com.core.Customer;
import com.core.plan;

/*String fname, String lname, String email, String pass, String address, LocalDate regdate,
			 String phoneno, plan pln, double f_amt*/
public class PopulatedList {
	public static List<Customer> PopCusList() {
		List<Customer> list = new ArrayList<>(Arrays.asList(
				new Customer("suraj", "Malge", "surajmalge123@gmail.com", "suraj123", "Akurdi",
						LocalDate.parse("2023-01-02"), "8975144614", plan.valueOf("MONTHLY"), 3000),
				new Customer("naru", "Sharma", "narushsharma123@gmail.com", "naru321", "pune",
						LocalDate.parse("2022-02-03"), "8237923298", plan.valueOf("YEARLY"), 32000),
				new Customer("ravi", "Tambde", "ravitambde123@gmail.com", "ravi4442", "pune",
						LocalDate.parse("2020-05-06"), "2384213401", plan.valueOf("HALFYEAR"), 17500),
				new Customer("tara", "kirade", "tarakirade123@gmail.com", "tara123", "pune",
						LocalDate.parse("2023-02-12"), "1232346149", plan.valueOf("QUARTERLY"), 11700)
//			new Customer("Suraj","Malge","surajmalge123@gmail.com","suraj123","Akurdi",LocalDate.parse("2023-01-02"),"8975144614",plan.valueOf("MONTHLY"),3000),
//			new Customer("Suraj","Malge","surajmalge123@gmail.com","suraj123","Akurdi",LocalDate.parse("2023-01-02"),"8975144614",plan.valueOf("YEARLY"),32000),
//			new Customer("Suraj","Malge","surajmalge123@gmail.com","suraj123","Akurdi",LocalDate.parse("2023-01-02"),"8975144614",plan.valueOf("MONTHLY"),3000)

		));

		return list;
	}

	public static Map<String, Customer> PopCusMap(List<Customer> list) {
		HashMap<String, Customer> HM = new HashMap<>();
		list.forEach(s -> HM.put(s.getEmail(), s));
		return HM;
	}
}
