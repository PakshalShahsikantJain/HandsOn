package main;
import "fmt";

func CheckSparse(arr [][]int,irow int,icol int) bool {
	var i int = 0;
	var j int = 0;
	var icnt int = 0;
	var icnt2 int = 0;

	for i = 0;i < irow;i++ {
		for j = 0;j < icol;j++ {
			if(arr[i][j] == 0) {
				icnt++;
			} else {
				icnt2++;
			}
		}
	}

	if(icnt > icnt2) {
		return true;
	} else {
		return false;
	}
}

func main() {
	var bret bool = false;
	var arr [][]int = nil;
	var irow int = 0;
	var icol int = 0;
	var i int = 0;
	var j int = 0;

	fmt.Println("Jay Ganesh.....");
	
	fmt.Println("Enter number of rows");
	fmt.Scan(&irow);

	fmt.Println("Enter number of cols");
	fmt.Scan(&icol);

	arr = make([][]int,irow);
	for i = 0;i < irow;i++ {
		arr[i] = make([]int,icol);
	}

	fmt.Println("Enter elements in matrix");
	for i = 0;i < irow;i++ {
		fmt.Printf("---Enter elements of %d row----\n",(i + 1))
		for j = 0;j < icol;j++ {
			fmt.Printf("Enter element no %d : ",(j + 1));
			fmt.Scan(&arr[i][j]);
		}
	}

	bret = CheckSparse(arr,irow,icol);
	if(bret == true) {
		fmt.Println("Entered matrix is sparse matrix");
	} else {
		fmt.Println("Entered matrix is not a sparse matrix");
	}
}