package utils;

import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.ObjectOutputStream;
import java.util.List;

import com.core.Customer;

public class Store {
	// You perform serialization (Store)(Hint:-JAVA App->OOS->FOS)
	public static void storedata(List<Customer> list, String filename) throws FileNotFoundException, IOException {
		try (ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream(filename))) {
			out.writeObject(list);
		}
	}
}
