/*
��蕶
�c 2 �}�X�A�� 3 �}�X�̃}�X�ڂ��^�����܂��B�ォ�� i �s�ځA������ j �s�ڂ̃}�X�̐F�́ACij �ŕ\����܂��B
���̃}�X�ڂ� 180 �x��]�������Ƃ��A���̃}�X�ڂƈ�v����Ȃ� YES ���A�����łȂ��Ȃ� NO ���o�͂���v���O�������쐬���Ă��������B
*/

#include<iostream>
#include<vector>
#include<string>

const int vertical = 2;  //������@2�~3�@�ȊO�̃p�^�[�����ł���悤��
const int side = 3;      //�����̕ϐ���ς���Έꉞ�ǂ�ȍs��ɂ��Ή��ł���悤�ɂ������@//2�~3�ȊO�Ŏ����ĂȂ����ǁc

int main() {
	int count = 0,a;
	bool flag;
	std::vector<std::string> v;
	std::vector<std::vector<std::string>> vv;
	
	v.resize(vertical);
	vv = std::vector<std::vector<std::string>>(vertical, std::vector<std::string>(side));

	for (int i = 0; i < vertical; i++) {
		std::cin >> v[i];
		for (int j = 0; j < side; j++) {
			vv[i][j] = v[i].substr(j, 1);
		}
	}


	for (int i = 0; i <vertical/2; i++) {
		for (int j = 0; j <side; j++) {
			count += vv[i][j] == vv[vertical - 1 - i][side - 1 - j] ? 1 : 0;
		}
	}

	flag=count == side;
	std::cout <<( flag ? "YES" : "NO") << std::endl;
	return 0;
}