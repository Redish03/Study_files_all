package com.example.myfirstandroid

fun main(){

}
// 4. 조건식

fun maxBy(a: Int, b : Int) : Int{
    if(a > b){
        return a
    }
    else{
        return b
    }

}








/*
fun main(){
    helloWorld()
    println(add(4, 5))

    // 3. String Template

    val name = "SW"
    val lastName = "Hong"
    println("my name is ${name + lastName}, I'm 21 years old")

    println("this is 2\$a")
    /*
    "$변수명"을 통해서 할 수 있다. 그리고 "${name}" 을 통해서 띄어쓰기 붙이기 가능
    그냥 습관으로 {} 붙여주는게 좋음.
    그냥 $표시를 쓰고 싶다(달러)
    println("this is 2\$a") 역슬래쉬쉬
    */
}

//1. 함수

fun helloWorld() : Unit {
    println("Hello World")
}

fun add(a : Int, b : Int) : Int {
    return a+b
}



/*
return 형식이 없으면, fun helloWorld() : Unit와 같이 함수를 선언해야한다. Unit은 생략 가능하다.
그러나, 함수를 return하면 자료형을 return해줘야 한다.
변수명을 Type보다 먼저 써준다.
 */

// 2. val vs var
// val = value
// val a : Int = 10
// Int 부분에서는 자동으로 알아서 int형으로 인식하기 때문에 그냥
// val c = 100 으로 해도 된다.

fun hi(){
    val a : Int = 10 // 수정 불가능
    var b : Int = 9 // 수정 가능

    b = 100

    val c = 100
    var d = 100
    var name = "answer"

}
*/