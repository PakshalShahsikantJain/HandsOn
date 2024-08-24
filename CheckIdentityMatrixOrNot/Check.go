package main;
import "fmt"

func CheckIdentity(arr [][]int,irow int,icol int) bool {
	var i int = 0;
	var j int = 0;
	var flag bool = true;

	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			if(i == j) {
				if(arr[i][j] != 1) {
					flag = false;
				}
			} else {
				if(arr[i][j] != 0) {
					flag = false;
				} 
			}
		}
	}

	return flag;
}

func main() {
	var arr [][]int = nil;
	var irow int = 0;
	var icol int = 0;
	var i int  = 0;
	var j int = 0;
	var bret bool = false;

	fmt.Println("Jay Ganesh.....");

	fmt.Println("Enter number of rows");
	fmt.Scan(&irow);

	fmt.Println("Enter number of cols");
	fmt.Scan(&icol);

	arr = make([][]int,irow);
	for i = 0;i < irow;i++ {
		arr[i] = make([]int,icol);
	} 

	fmt.Println("Enter elements in matrix : ");
	for i = 0;i < irow;i++ {
		fmt.Printf("Enter elements of %d row : \n",(i + 1));
		for j = 0;j < icol;j++ {
			fmt.Printf("Enter element no %d : ",(j + 1));
			fmt.Scan(&arr[i][j]);
		}
	}

	fmt.Println("Element of matrix are : ");
	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			fmt.Printf("%d\t",arr[i][j]);
		}
		fmt.Println();
	}

	bret = CheckIdentity(arr,irow,icol);
	if(bret == true) {
		fmt.Println("Entered matrix is identity matrix");
	} else {
		fmt.Println("Entered matrix is not an identity matrix");
	}
}
