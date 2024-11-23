/*
	Auhtor : Pakshal Jain
	Date : 15/10/2022
	Program : To Calcualte Percentage
*/

//Requried Libraries
package main
import "fmt";

//Function To Calculate Percentage
func Percentage(No float32,No2 float32) float32 {
	var ans float32 = 0.0;

	ans = No2 / No * 100;

	return ans;
}

//Main Function
func main() {
	var no float32 = 0;
	var no2 float32 = 0.0;
	var fret float32 = 0.0;

	fmt.Println("Jay Ganesh...");

	fmt.Println("Enter Total Marks...");
	fmt.Scan(&no);

	fmt.Println("Enter Obtained Marks...");
	fmt.Scan(&no2);

	//Calling Percentage Function
	fret = Percentage(no,no2);

	fmt.Printf("Percentage is : %.2f%%",fret);
}
