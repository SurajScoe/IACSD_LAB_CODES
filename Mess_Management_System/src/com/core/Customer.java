package com.core;

import java.time.LocalDate;

/*Create a Customer class with following attributes
Customer id(int) , first name(String), last name (String),
email(String), password(String), Address String, RegisterDate(LocalDate),
planEndDate(LocalDate), Address(String), Phone No(String),plan Enum,
final_amount double
*/
public class Customer {
	private int custId;
	private String fname;
	private String lname;
	private String email;
	private String pass;
	private String address;
	private LocalDate regdate;
	private LocalDate planEnddate;
	private String phoneno;
	private plan pln;
	private double f_amt;
	private static int counterId;
	
	static {
		counterId=100;
	}
	
	public Customer(String fname, String lname, String email, String pass, String address, LocalDate regdate,
			 String phoneno, plan pln, double f_amt) {
		super();
		this.custId=counterId++;
		this.fname = fname;
		this.lname = lname;
		this.email = email;
		this.pass = pass;
		this.address = address;
		this.regdate = regdate;
		/*registration date can be only todays date or after todays date and end date
 must be depend on plan selected e.g if user reg date is 11/10/2023 and 
 selected plan is of 1 year then end date set automatically as 11/12/2024*/
		if(plan.MONTHLY==pln)
		this.planEnddate = regdate.plusMonths(1);
		else if(plan.YEARLY==pln)
		this.planEnddate = regdate.plusMonths(12);
		else if(plan.HALFYEAR==pln)
		this.planEnddate = regdate.plusMonths(6);
		else if(plan.QUARTERLY==pln)
		this.planEnddate = regdate.plusMonths(3);
		this.phoneno = phoneno;
		this.pln = pln;
		this.f_amt = f_amt;
	}
	
	@Override
	public String toString() {
		return "Customer [custId=" + custId + ", fname=" + fname + ", lname=" + lname + ", email=" + email + ", pass="
				+ pass + ", address=" + address + ", regdate=" + regdate + ", plandate=" + planEnddate + ", phoneno="
				+ phoneno + ", pln=" + pln + ", f_amt=" + f_amt + "]";
	}

	public void setId(int custId) {
		this.custId=custId;
	}
	
	public int getId() {
		return custId;
	}

	public String getFname() {
		return fname;
	}

	public void setFname(String fname) {
		this.fname = fname;
	}

	public String getLname() {
		return lname;
	}

	public void setLname(String lname) {
		this.lname = lname;
	}

	public String getEmail() {
		return email;
	}

	public void setEmail(String email) {
		this.email = email;
	}

	public String getPass() {
		return pass;
	}

	public void setPass(String pass) {
		this.pass = pass;
	}

	public String getAddress() {
		return address;
	}

	public void setAddress(String address) {
		this.address = address;
	}

	public LocalDate getRegdate() {
		return regdate;
	}

	public void setRegdate(LocalDate regdate) {
		this.regdate = regdate;
	}

	public LocalDate getPlandate() {
		return planEnddate;
	}

	public void setPlandate(LocalDate plandate) {
		this.planEnddate = plandate;
	}

	public String getPhoneno() {
		return phoneno;
	}

	public void setPhoneno(String phoneno) {
		this.phoneno = phoneno;
	}

	public plan getPln() {
		return pln;
	}

	public void setPln(plan pln) {
		this.pln = pln;
	}

	public double getF_amt() {
		return f_amt;
	}

	public void setF_amt(double f_amt) {
		this.f_amt = f_amt;
	}
	
	@Override
	public boolean equals(Object o) {
		if(o instanceof Customer) {
			//downCasting done here
			return this.email.equals(((Customer)o).getEmail());
		}else
		return false;
	}
	
	
	
}
