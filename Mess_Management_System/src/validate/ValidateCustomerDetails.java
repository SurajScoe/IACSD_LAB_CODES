package validate;

import java.text.ParseException;
import java.time.LocalDate;
import java.util.Map;

import com.core.Customer;
import com.core.plan;

import CustomException.CustomException;

/*a) Validate Customer check for Duplication
b) Validatecustomer login if not exist or invalid mail & invalid password
Email must be like regex provided in :
"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}"
e.g user1.dac@iacsd.com
c) ParseValidatePlan , registration amount must be match with plan
d) Parse local Date
registration date can be only todays date or after todays date and end date must be depend on plan selected
e.g if user reg date is 11/10/2023 and selected plan is of 1 year then end date set automatically as 11/12/2024
e) Phone number must be only 10 character and the number could be between 0 to 9. 
Hint : regex
*/
public class ValidateCustomerDetails {
	/*a) Validate Customer check for Duplication*/
	public static void CheckDupEmail(String email,Map<String,Customer> map) throws CustomException {
		if(map.containsKey(email)) {
			throw new CustomException("Duplicate Email Found !!");
		}
	}
	
	
	/*b) Validatecustomer login if not exist or invalid mail & invalid password
Email must be like regex provided in :
"[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}"
e.g user1.dac@iacsd.com*/
	public static void ValidateCustomerEmailnPass(String email,String pass,Map<String,Customer> map) throws CustomException {
		// if exit : throw exc
		CheckDupEmail(email, map);
		// if not exit : check for correctness/validation
		String regex = "[A-Z0-9a-z._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,}";
		if(!email.matches(regex))
			throw new CustomException("Invalide Email plz rechech !!");
		
	}
	
	/*c) ParseValidatePlan , registration amount must be match with plan*/
	public static plan CheckPlan(String plans) throws IllegalArgumentException {
		plan p = plan.valueOf(plans.toUpperCase());
		return p;
	}
	public static double MathRegAmtPlan(double amt) throws CustomException {
		if(plan.MONTHLY.getPlanCharge()==amt || plan.YEARLY.getPlanCharge()==amt 
				|| plan.HALFYEAR.getPlanCharge()==amt || plan.QUARTERLY.getPlanCharge()==amt)
			return amt;
			throw new CustomException("Registration amount doesn't matched any of plan !!");
			
	}
	
	/*d) Parse local Date
registration date can be only todays date or after todays date and end date
 must be depend on plan selected e.g if user reg date is 11/10/2023 and 
 selected plan is of 1 year then end date set automatically as 11/12/2024*/
	public static LocalDate CheckDate(String date) throws ParseException{
		LocalDate d = LocalDate.parse(date);
		return d;
	}
	
	/*e) Phone number must be only 10 character and the number could be between 0 to 9. 
	 * hint:regex*/
	public static void ChechPhoneNo(String phoneNo) throws CustomException {
		String Regexp = "^\\d{10}$"; // /[0-9]/
		if(!phoneNo.matches(Regexp))
			throw new CustomException("Invalid Phone number Try again !!");
		
	}
	
	
	//Validate All
	public static Customer ValidateAll(String fname,String lname,String email,String pass,
			String address,String regdate,String PhoneNo,String plan,double final_amt,Map<String,Customer> map)
					throws CustomException, ParseException {
		CheckDupEmail(email,map);
		CheckPlan(plan);
		LocalDate date = CheckDate(regdate);
		plan p1 = CheckPlan(plan);
		ChechPhoneNo(PhoneNo);
		double amt = MathRegAmtPlan(final_amt);
		return map.put(email,new Customer(fname, lname, email, pass, address, date, PhoneNo, p1, amt));
	}
	
	
	
	
	
	
}
