/*
 	Author : Pakshal Jain
	Date : 04/09/2022
	Program : To Divide Two Numbers
*/

//Required Packages
package main

import "fmt"

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func Div(No int ,No2 int) int {
	var ans int = 0;

	if(No2 == 0) {
		fmt.Printf("Invalid Input....\n");
		
		return 0;
	}else if(No2 < 0) {
		No2 = -No2;
	}

	ans = No / No2;

	return ans;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var no int = 0;
	var no2 int = 0;
	var ret int = 0;

	fmt.Printf("Jay Ganesh.....\n");

	fmt.Printf("Enter First Number.....\n");
	fmt.Scan(&no);

	fmt.Printf("Enter Second Number......\n");
	fmt.Scan(&no2);

	ret = Div(no,no2);

	fmt.Printf("Division of Two Numbers is : %d",ret);
}