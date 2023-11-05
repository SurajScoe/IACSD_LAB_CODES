package com.core;

/*Messplan(Plan : enum) Plans Are as follows:-
 Monthly (3000), Quarterly (11700), Half Year (17500), Yearly (32000)
*/
public enum plan {
	MONTHLY(3000), QUARTERLY(11700), HALFYEAR(17500), YEARLY(32000);

	private double planCharge;

	public double getPlanCharge() {
		return planCharge;
	}

	public void setPlanCharge(double planCharge) {
		this.planCharge = planCharge;
	}

	private plan(double planCharge) {
		this.planCharge = planCharge;
	}

	public String toString() {
		return "[ PlanName: " + name() + " ]";
	}

}
