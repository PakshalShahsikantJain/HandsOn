/*
	Author : Pakshal Shashikant Jain 
	Date : 02/06/2023
	Program : Design application for income tax department to calculate tax
			  amount. According to the income tax department there is no
			  income tax for the income less than 5 lakhs.

              If income is in between 5 to 10 lakhs then there will be 10% tax.

			  If income is in between 10 to 20 lakhs then there will be 20%
              tax.

  			  And for more than 20 lakhs there will be 30% tax.
			  We have to accept gross income from user and return the tax
			  amount.
*/

//Required Libraries
package main 
import "fmt"

//Function To Calculate Tax
func TaxCalc(No int) int {
	var ans int = 0;

	if (No < 500000) {
		return ans
	} else if ((No >= 500000)&&(No < 1000000)){
		ans = (No * 10) / 100;

		return ans;
	} else if ((No >= 1000000)&&(No <= 2000000)) {
		ans = (No * 20) / 100;

		return ans;
	} else {
		ans = (No * 30) / 100;

		return ans;
	}
}

//Main Function
func main() {
	var No int = 0;
	var fret int = 0;

	fmt.Println("Jay Ganesh.....");
	
	fmt.Println("Enter Your Gross Income....");
	fmt.Scan(&No);

	//Call To TaxCalc Function
	fret = TaxCalc(No);

	fmt.Printf("You Have To Pay Taxable amount of %d",fret);
}