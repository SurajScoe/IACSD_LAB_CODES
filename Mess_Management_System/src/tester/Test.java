package tester;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.stream.Collectors;
import static utils.Store.storedata;
import static utils.Restore.restoredate;

import com.core.Customer;
import com.core.plan;

import static utils.PopulatedList.*;
import static validate.ValidateCustomerDetails.*;

public class Test {
	public static void main(String[] args) {
		/*
		 * 1. Sign up Customer 2. If already register then sign in 3. Change Password 4.
		 * Sort Customer as per A) First name B) According to plan C) According to date
		 * of registration (Imperative/Declarative way) 5. Unsubscribe customer
		 * according plan duration (month wise (1, 3, 6, 12)) 6. Display all Customers
		 * 7) Modify all customers first name (make first Letter capital of customers
		 * first name) 8) Display email addresses of the customers who did registration
		 * in month of January 10) Display count of the Customers who have register for
		 * plan: Monthly 11) Search the Customer who lived in Akurdi. 12) Give the 20%
		 * discount to the customers who have selected plan for 1 year.
		 */
		List<Customer> CusList = new ArrayList<>();
		CusList = PopCusList();
		Map<String, Customer> Cusmap = new HashMap<>(PopCusMap(CusList));
		restoredate("suraj.ser");
		try (Scanner sc = new Scanner(System.in)) {
			boolean exit = true;
			System.out.println("1. Sign up Customer\r\n" + "2. If already register then sign in\r\n"
					+ "3. Change Password  \r\n" + "4. Sort Customer as per \r\n" + "A) First name \r\n"
					+ "B) According to plan\r\n" + "C) According to date of registration\r\n"
					+ "(Imperative/Declarative way)\r\n"
					+ "5. Unsubscribe customer according plan duration (month wise (1, 3, 6, 12))\r\n"
					+ "6. Display all Customers\r\n"
					+ "7) Modify all customers first name (make first Letter capital of customers first name)\r\n"
					+ "8) Display email addresses of the customers who did registration in month of January\r\n"
					+ "10) Display count of the Customers who have register for plan: Monthly\r\n"
					+ "11) Search the Customer who lived in Akurdi.\r\n"
					+ "12) Give the 20% discount to the customers who have selected plan for 1 year.\r\n");
			while (exit) {
				try {
					System.out.println("Enter your Choice : ");
					switch (sc.nextInt()) {
					case 0:
						exit = false;
						storedata(CusList, "suraj.ser");
						System.out.println("Data Stored !!");
						break;
					case 1:
						System.out.println("1. Sign up Customer\\r\\n"
								+ "\nString fname,String lname,String email,String pass,\r\n"
								+ "			String address,String regdate,String PhoneNo,String plan,double final_amt,Map<String,Customer> map");
//ram yadav ram123@gmail.com ram123 pune 2022-01-09 8987738009 YEARLY 32000
						ValidateAll(sc.next(), sc.next(), sc.next(), sc.next(), sc.next(), sc.next(), sc.next(),
								sc.next(), sc.nextDouble(), Cusmap);
						System.out.println("New Account Succefully created !!");
						break;

					case 2:
						// "2. If already register then sign in\\r\\n";
						System.out.println("Enter the email : ");
						String email = sc.next();
						System.out.println("Enter the Pass : ");
						String pass = sc.next();

						if (Cusmap.containsKey(email) && Cusmap.containsValue(pass))
							System.out.println("You have Signed in !!");
						else
							System.out.println("You Entered Invalide Email");
						System.out.println("Your Account Details");

						System.out.println(Cusmap.get(email));
						break;
					case 3:
						// 3. Change Password \r\n
						System.out.println("Enter the email and old pass :");

						break;
					case 4:
						/*
						 * 4. Sort Customer as per \r\n + "A) First name \r\n" +
						 * "B) According to plan\r\n" + "C) According to date of registration\r\n"
						 */

						System.out.println("\nSort Customer as per First name\n");
						Cusmap.values().stream().sorted((c1, c2) -> c1.getFname().compareTo(c2.getFname()))
								.forEach(System.out::println);

						System.out.println("\nSort Customer as per According to plan\n");
						Cusmap.values().stream().sorted((c1, c2) -> c1.getPln().compareTo(c2.getPln()))
								.forEach(System.out::println);
						System.out.println("\nSort Customer as per According to date of registration\n");
						Cusmap.values().stream().sorted((c1, c2) -> c1.getRegdate().compareTo(c2.getRegdate()))
								.forEach(System.out::println);
						break;
					case 5:
						/* 5. Unsubscribe customer according plan duration (month wise (1, 3, 6, 12)) */

						List<Customer> newList = new ArrayList<>();
						System.out.println("Enter the plan duration : ");
						int dur = sc.nextInt();
						if (dur == 1) {
							newList = CusList.stream().filter(s -> s.getPln() == plan.MONTHLY)
									.collect(Collectors.toList());
							CusList.removeAll(newList);
						} else if (dur == 3) {
							newList = CusList.stream().filter(s -> s.getPln() == plan.QUARTERLY)
									.collect(Collectors.toList());
							CusList.removeAll(newList);
						} else if (dur == 6) {
							newList = CusList.stream().filter(s -> s.getPln() == plan.HALFYEAR)
									.collect(Collectors.toList());
							CusList.removeAll(newList);
						} else if (dur == 12) {
							newList = CusList.stream().filter(s -> s.getPln() == plan.YEARLY)
									.collect(Collectors.toList());
							CusList.removeAll(newList);
						}

						break;

					case 6:
						System.out.println("Display Customer Details : ");
//					Cusmap.forEach((k,v)->System.out.println(v));
						CusList.forEach(System.out::println);
						break;

					case 7:
						/*
						 * 7) Modify all customers first name (make first Letter capital of customers
						 * first name)
						 */

						Iterator<Map.Entry<String, Customer>> itr = Cusmap.entrySet().iterator();
						while (itr.hasNext()) {
							Map.Entry<String, Customer> entry = itr.next();
							Customer cus = entry.getValue();
							String fname = cus.getFname();
							if (fname != null && !fname.isEmpty()) {
								char fletter = Character.toUpperCase(fname.charAt(0));
								String restN = fname.substring(1).toLowerCase();
								cus.setFname(fletter + restN);
							}
						}
//					for(Map.Entry<String, Customer> entry : Cusmap.entrySet()) {
//						System.out.println(entry.getValue());
//					}
						Cusmap.forEach((k, v) -> System.out.println(v));

						break;

					case 8:
//8) Display email addresses of the customers who did registration in month of January

						Cusmap.values().stream().filter(s -> s.getRegdate().getMonthValue() == 1)
								.forEach(s -> System.out.println(s.getEmail() + " " + s.getAddress()));
						break;
					case 10:
//10) Display count of the Customers who have register for plan: Monthly
						long count = Cusmap.values().stream().filter(s -> s.getPln() == plan.MONTHLY).count();
						System.out.println("The count is : " + count);
						break;
					case 11:
//11) Search the Customer who lived in Akurdi.\r\n
						Cusmap.values().stream().filter(s -> s.getAddress().equals("Akurdi"))
								.forEach(System.out::println);
						break;
					case 12:
//12) Give the 20% discount to the customers who have selected plan for 1 year.
						Iterator<Customer> itr1 = CusList.iterator();
						while (itr1.hasNext()) {
							Customer cus1 = itr1.next();
							if (cus1.getPln() == plan.YEARLY) {
								cus1.setF_amt(cus1.getF_amt() * 0.8);
								System.out.println(cus1);
							}
						}
						break;
					case 13:
						/* You perform serialization (Store)(Hint:-JAVA App->OOS->FOS) */
						storedata(CusList, sc.next());
						System.out.println("File has been saved !!");

						break;
					default:
						break;
					}
				} catch (Exception e) {
					System.out.println(e);
					e.printStackTrace();
				}
			}
		}
	}
}
