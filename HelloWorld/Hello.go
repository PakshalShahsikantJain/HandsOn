package main
import "fmt"

func add(No1 int, No2 int) int {
	Ans := 0;
	Ans = No1 + No2;
	return Ans
}
func main() {
	fmt.Println("Jay Ganesh");
	var No1 int = 0;
	var No2 int = 0;
	iRet := 0;
	fmt.Println("Enter one Number :-");
	fmt.Scan(&No1);

	fmt.Println("Enter Second Number :-");
	fmt.Scan(&No2);

	//fmt.Printf("%d\n",No1);
	//fmt.Printf("%d\n",No2);

	iRet = add(No1,No2)
	fmt.Printf("Addition of Number :- %d\n",iRet);
	
}