/*
	Author : Pakshal Jain
	Date : 18/09/2022
	Program : To display first number in second number of times
*/

//Required Libraries
package main
import "fmt";

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//User Defined Function TO Print ouput
func Display(No int,No2 int) {
	var i int = 0;

	if No2 < 0 {
		No2 = -No2;
	}
	for i=0;i < No2;i++ {
		fmt.Printf("%d\t",No);
	}
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Ganpati Bappa Morya....");
	fmt.Println("Enter Number To Print....");
	fmt.Scanf("%d\n",&No);

	fmt.Println("Enter Number To Iterate....");
	fmt.Scanf("%d",&No2);

	//Call To Userdefined Function
	Display(No,No2);
}