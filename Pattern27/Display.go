package main 
import "fmt"

func Pattern(No int,No2 int) {
	var i int = 0;
	var j int = 0;

	fmt.Println("Printing Below Given Pattern : ");
	for i = 1;i <= No;i++ {
		for j = 1;j <= No2;j++ {
			if (i >= j) {
				fmt.Print("*\t");
			} else {
				fmt.Print(" \t");
			}
		}
		fmt.Println();
	}
}	
func main() {
	var No int = 0;
	var No2 int = 0;

	fmt.Println("Jay Ganesh....");
	
	fmt.Println("Enter Number of Rows You Want...");
	fmt.Scan(&No);

	fmt.Println("Enter Number of Columns You Want...");
	fmt.Scan(&No2);

	Pattern(No,No2);
}