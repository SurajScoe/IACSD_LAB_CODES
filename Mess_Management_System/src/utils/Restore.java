package utils;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.List;

import com.core.Customer;
// De-serialization (Restore)(Hint:-JAVA App<-OIS<-FIS)
public class Restore {
	public static List<Customer> restoredate(String filename){
		try(ObjectInputStream in = new ObjectInputStream(new FileInputStream(filename))){
			//So down cast here in deserilization
			List<Customer> list = new ArrayList<>();
			list=(List<Customer>)in.readObject();
			return list;
		}
		catch(FileNotFoundException e) {
			System.out.println(e);
			e.printStackTrace();
			return new ArrayList<>();
		}
		catch(IOException e) {
			System.out.println(e);
			e.printStackTrace();
			return new ArrayList<>();
		}
		catch(ClassNotFoundException e) {
			e.printStackTrace();
			return new ArrayList<>();
		}
	}
}
