# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명

- 제어문
	1. 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의), Overriding
		
	2. 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식){
			1. 초기식을 가지고 조건식을 따진다.
			2. 참이면 for문의 실행문 실행
			3. 증감식을 실행
			4. 조건식을 따지고
			2.
			3.
			4.
			2.
			3.
			4.
			.
			.
			.
		}

	
- 지역변수 = 로컬변수
	1. 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	1. 문자 : 문자(char),문자열
	2. 숫자 : 정수(int),실수
	
- 정수로 계산하기
	



## 2일차
// class 안에 들어 가는 함수 = Method

- Default Value
- Reference 함수
	- 반환형 Reference Type
- Name Space
- 전역,지역변수
- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다 - free()(C++:delete로 반환)
	- data: 함수, 전역변수, 상수, 문자 리터럴
	
	- // A & B = 비트 And 연산자
	- // A && B = 논리 And 연산자 = 논리 곱
		
-------------- clang04_test--------------
- scanf 함수나 strcpy 함수 쓸시 전처리기 _CRT_SECURE_NO_WARNINGS 사용

## 3일차
- 131P 까지함
- Class 
	- 멤버변수와 멤버함수로 구성된다.
	- 클래스 내부에는 멤버들의 선언으로 작성 
	- 멤버함수의 정의를 외부로 빼낸다.(스코프연산자)
	- 일반적으로 멤버변수는 private, 멤버함수 public의 접근제한을 사용한다.


## 4일차
- 136P(객체지향 프로그래밍의 이해)부터, 174P
- 상수화 시킬때는 무조건 초기화
- 객체 생성자 이해 중요★
- 생성자(클래스 이름과 같은 멤버함수로 출력은 없다.)
		- 객체 생성시 자동으로 호출되는 멤버함수
		- 모든 클래스는 명시적으로 생성자를 작성하면 디폴트 생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
		- 멤버변수들의 초기화를 담당한다.
		
		
## 5일차
- 175P(멤버 이니셜라이저)부터, P220(복사 생성자)까지
- 멤버 이니셜라이저
	- 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
	- const 변수와 참조변수의 초기화에 사용
- 소멸자 
	- 동적으로 할당된 메모리를 해제 
	- ex) ~AAA() {};: 객체가 소멸할때 자동으로 호출 
- 싱글톤  
	- 생성자를 통해서 여러번 호출이 되더라도 인스턴스를 새로 생성하지 않고 최초 호출 시에 만들어두었던 인스턴스를 재활용하는 패턴
- 포인터 배열 
	- 포인터를 저장하고 있는 배열
	- 객체의 주소 값 저장이 가능한 포인터 변수로 이뤄진 배열
- 배열 포인터 
	- 배열을 가리키는 포인터(배열의 주소를 저장하고 있음)
- 참조 
	- 또다른 별명 (선언과 동시에 초기화)
- 복사생성자 
	- 객체를 복사할때 호출되는 생성자
	- 따라서 객체를 복사할 객체를 입력으로 가져야하는데 이때 원본 객체의 참조를 입력으로 받아야 한다.
- 호출과 실행은 다름

## 6일차 
- 221P(깊은 복사와 얕은복사)부터 255P(Static)
- 디폴트 복사 생성자의 문제점
	- 복사 생성자는 디폴트 생성자와 같이 Class를 만들 때 직접 정의하지 않아도 컴파일러가 알아서 디폴트 복사생성자를 생성해준다.
	- 하지만 얕은 복사를 한다는 점에서 문제가 발생한다.
	- 동적해제 과정에서 유효하지 않은 메모리를 해제함으로 오류가 발생하게 된다.
- 복사 생성자 호출 시점 
	- 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는 경우
	- Call-by-value 방식의 함수호출 과정에서 객체를 인자로 전달하는 경우
	- 객체를 반환하되, 참조형으로 반환하지 않는 경우 
	

## 7일차
- P256부터 P311까지
- 뒤에() : 함수 , 없으면 변수 or 객체
- 전역변수는 가능한 사용하지 말것.
- static 멤버함수
	- 선언된 클래스의 모든 객체가 공유한다.
	- public으로 선언이 되면, 클래스의 이름을 이용해서 호출이 가능하다.
	- 객체의 멤버로 존재하는 것이 아니다.
- 유도 클래스의 객체가 소멸될 때에는, 유도 클래스의 소멸자가 실행되고 난 다음에 기초 클래스의 소멸자가 실행된다
- 스택에 생성된 객체의 소멸순서는 생성순서와 반대이다.

## 8일차
- P326(상속과 다형성)부터 P382 까지
- 포인터 -> 주소 생각, / 객체 포인터 변수: 객체의 주소 값을 저장하는 포인터 변수 
- 부모타입의 객체 포인터 변수는 자식객체를 가리킬 수 있다. 자식 -> 부모 (x)
- 상속 관계에서 다시 쓰는것 -> 오버로딩 , / 이름은 같은데 매개변수가 다른경우 -> 오버라이딩
- 다형성
	- 오버로딩(Overloading) - 다중정의
	- 오버라이딩(Overriding) - 재정의, 상속관계에서 사용
- 순수 가상함수 : 함수의 몸체가 정의되지 않는 가상 함수
	- 순수 가상함수를 가지고 있는 클래스(추상클래스)는 객체를 생성할 수 없다.
- 추상 클래스 : 순수 가상함수의 몸체를 생성해서 객체를 생성해라. 지금 당장은 생성할 필요없는 객체
- 가상 소멸자


## 9일차
- P402(연산자 오버로딩)부터 P445까지
- 컴파일러 기본 제공 : 디폴트 연산자, 복사 생성자(깊은 복사할때는 예외), 소멸자

## 10일차
-

## 11일차


## 12일차
- 상품검색 프로그램 만들기

## 13일차 
- P586(예외처리)
- 배열(ex.for문) : 장점: 검색 용이 // 단점: 수정이 힘듬, 크기 바꿀수 없음(고정적인 값)
- 배열의 단점을 보완하기 위해 vector를 사용함
- Vector : 자동으로 메모리가 할당, 구현하기 위해 template 사용  
	- 맨앞은 V.fornt(), 맨뒤는 V.back()으로 메서드
	- push_back, pop_back 매서드 를 통해서 맨끝에 삽입과 삭제가 가능하다.
	- 가능하지만 비효율적 
	- Vector라는 헤더 파일 필요