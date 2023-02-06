# signal-strength
이경문 멘토님의 심화교육 과정 4번째 과제 Signal-Strength과제 입니다.

## 필요 라이브러리
1. Ncurses: 새로운 화면을 띄워주기 위한 Lib  
유닉스에서 화면 리프래쉬, 콘솔 등 다양한 일에 사용된다.
2. Pcap: 네트워크 패킷을 잡기 위한 Lib
각종 네트워크 패킷을 잡을 수 있다.

## 프로젝트 빌드 방법
1. 필요 라이브러리를 설치한다.
    - libpcap
    - libncurses
    유닉스 명령어 기준  
        sudo apt install libncursesw5-dev  
2. git clone https://github.com/arad4228/signal-strength.git
3. cd signal-strength
4. mkdir cmake-temp && mkdir Build
5. cd cmake-temp
6. cmake ../Src/ && cmake --build .
7. sudo ../Build/signal-strength < Network InterFaceName > < Target Mac Address >