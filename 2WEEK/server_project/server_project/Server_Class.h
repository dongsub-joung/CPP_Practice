#pragma once

class Server
{
public:

	/* ####### �뷮 ####### */

	void SendStorageCapacity();

	//���� �뷮 ���;
	void CalculateCapacity();

	//���� �뷮 ���
	void ShowUsedCapacity();

	//��� ���� �뷮 ���
	void ShowAvaibleCapacity();



	/* ####### ���� ####### */

	//���� ���ε�
	void UploadFile();

	//���� �ٿ�ε�, ���� �ϱ� -> ���� ��� ��Ÿ����
	void ShowFileList();

	//���� �ٿ�ε�
	void DownroadFile();

	//���� ����
	void DeleteFile(char input_name);

	

	//�ϵ� �뷮 ����
	void Sharding();

	//������ ���� ���� �� ����

	//��ȣȭ

private:


} Server;