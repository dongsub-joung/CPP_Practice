#pragma once

class Server
{
public:

	/* ####### 용량 ####### */

	void SendStorageCapacity();

	//사용된 용량 계산;
	void CalculateCapacity();

	//사용된 용량 출력
	void ShowUsedCapacity();

	//사용 가능 용량 출력
	void ShowAvaibleCapacity();



	/* ####### 파일 ####### */

	//파일 업로드
	void UploadFile();

	//파일 다운로드, 삭제 하기 -> 파일 목록 나타내기
	void ShowFileList();

	//파일 다운로드
	void DownroadFile();

	//파일 삭제
	void DeleteFile(char input_name);

	

	//하드 용량 증가
	void Sharding();

	//가입한 유저 저장 및 전송

	//암호화

private:


} Server;