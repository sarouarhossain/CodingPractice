package main

import (
	"fmt"
	//"reflect"
)

func main() {
	fmt.Println("Bismillah")

	// var a,b,c = 1,"ro",3.5
	// fmt.Println(a)
	// fmt.Println(b)
	// fmt.Println(c)

	// var d string
	// fmt.Println(d == "")

	// e := "test"
	// fmt.Println(e)

	// const n = 5e30
	// fmt.Println(reflect.TypeOf(n))
	// fmt.Println(n/5e10)

	// i := 1;
	// for {
	// 	fmt.Println("hello: ", i)
	// 	i++
	// 	if(i>5) {
	// 		break
	// 	}
	// }

	// for n := 0; n <=10 ; n++ {
	// 	if(n%2 == 0){
	// 		continue
	// 	}
	// 	fmt.Println(n)
	// }

	
	// if x := 4; x%2 == 0 {
	// 	fmt.Println("even", x.(type))
	// }else {
	// 	fmt.Println("odd")
	// }

	whatAmI := func(i interface{}) {
		switch t := i.(type) {
		case bool:
			fmt.Println("I'm a bool")
		case int:
			fmt.Println("I'm an int")
		default:
			fmt.Printf("Don't know type %T\n", t)
		}
	}



	// whatAmI := func(i interface{}) {
 //        switch t := i.(type) {
 //        case bool:
 //            fmt.Println("I'm a bool")
 //        case int:
 //            fmt.Println("I'm an int")
 //        default:
 //            fmt.Printf("Don't know type %T\n", t)
 //        }
 //    }

    // whatAmI(true)
    // whatAmI(1)
    // whatAmI("hey")

    whatAmI(true)
	whatAmI(0)
	whatAmI("aaa")
}




