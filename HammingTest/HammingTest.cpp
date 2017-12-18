#include "HammingTest.h"


bitset<dataLen> enInput("00001100000000000000000000000000");
bitset<codeLen> enOutput;
bitset<codeLen> deInput;
bitset<codeLen> deOutput;
bitset<parityLen> parityXOR;


//��matlab����ȷ�Ľ��Ӧ��Ϊ string temp = "00001100000000000000000000000000 0001111";

unordered_map<bitset<parityLen>, bitset<codeLen>> errTable;

//Hamming(39,32)���ɾ��� 32 * 39�����ɾ���
vector<vector<int>> generateMatrix = {
    {1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,1,0,1},
    {0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0},
    {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,1,0,1},
    {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,1,1},
    {0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0,0},
    {0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0,0},
    {0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,1,1,0,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,1,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,1,0,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,1,0,1,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,1,0,1,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,1,1,1}
};

//Hamming(39,32)У����� 7 * 39��У�����
//���� H * A(39λ��Ϣ��) = 0���� �Լ���Ӧ�ı������ó�
int adjointMatrix_T[39][7]; //���У������ת��
int adjointMatrix[7][39] = {
    {
        1, 1, 1, 1, 1, 1, 1, 1,  //31-24
        0, 0, 0, 0, 0,  //23-19
        0, 0, 0, 0, 0,  //18-14
        0, 0, 0, 0, 0, 0,   //13-8
        1, 1, 1, 1, 1, 1, 1, 1, //7-0
        1, 0, 0, 0, 0, 0, 0
    }, //��λ����

    {
        1, 1, 1, 1, 1, 1, 1, 1,  //31-24
        0, 0, 0, 0, 0,  //23-19
        0, 0, 0, 1, 1,  //18-14
        1, 1, 1, 1, 1, 1,   //13-8
        0, 0, 0, 0, 0, 0, 0, 0, //7-0
        0, 1, 0, 0, 0, 0, 0
    }, //��λ����

    {
        1, 1, 0, 0, 0, 0, 0, 0,  //31-24
        1, 1, 1, 1, 1,  //23-19
        1, 0, 0, 1, 1,  //18-14
        0, 0, 0, 0, 0, 0,   //13-8
        1, 1, 1, 1, 1, 1, 0, 0, //7-0
        0, 0, 1, 0, 0, 0, 0
    }, //��λ����

    {
        0, 0, 1, 1, 1, 0, 0, 0,  //31-24
        1, 1, 1, 0, 0,  //23-19
        0, 1, 1, 0, 0,  //18-14
        1, 1, 1, 0, 0, 0,   //13-8
        1, 1, 1, 0, 0, 0, 1, 1, //7-0
        0, 0, 0, 1, 0, 0, 0
    }, //��λ����

    {
        1, 0, 1, 0, 0, 1, 1, 0,  //31-24
        1, 0, 0, 1, 1,  //23-19
        0, 0, 1, 1, 0,  //18-14
        1, 0, 0, 1, 1, 0,   //13-8
        1, 0, 0, 1, 1, 0, 0, 1, //7-0
        0, 0, 0, 0, 1, 0, 0
    }, //��λ����

    {
        0, 0, 0, 1, 0, 1, 0, 1,  //31-24
        0, 1, 0, 1, 0,  //23-19
        1, 1, 1, 0, 0,  //18-14
        0, 1, 0, 1, 0, 1,   //13-8
        0, 1, 0, 1, 0, 1, 1, 1, //7-0
        0, 0, 0, 0, 0, 1, 0
    }, //��λ����

    {
        1, 0, 1, 1, 0, 1, 0, 0,  //31-24
        0, 0, 1, 0, 1,  //23-19
        1, 1, 0, 0, 1,  //18-14
        0, 0, 1, 0, 1, 1,   //13-8
        1, 1, 0, 1, 0, 0, 0, 1, //7-0
        0, 0, 0, 0, 0, 0, 1
    } //��λ����
};



/**
Hamming����
@input ����32λ��Ϣλ
@output ���39λ������Hamming��
*/
void HammingTest::HammingEncode(bitset<dataLen> &input, bitset<codeLen> &output) {
    //printf("\tHammingEncode is running...\n");
    //cout << "\tinput is  " << input.to_string() << endl;
    //��Ϣλ�������ɾ���ʱ Ҫ��һ��任 ����Ӧ���±�㶮�Ϳ�����
    for(int j = 0; j < codeLen; j++) {
        for(int i = 0; i < dataLen; i++) {
            if(input[31 - i] * generateMatrix[i][j]) {
                output.flip(38 - j);
            }
        }
    }
    //cout<<"\toutput is " << output.to_string() << endl;
    //printf("\tHammingEncode is ending...\n");
}

/**
Hamming�����
@input �յ���39λ����
@output ���Ƿ��д���
*/
void HammingTest::HammingDecode(bitset<codeLen> &input, bitset<codeLen> &output) {
    //printf("\tHammingDecode is running...\n");
    getParityXOR(input, parityXOR);
    //cout << "\tparityXOR is " << parityXOR << endl;
    if(!parityXOR.any()){
        output = input;
        return;
    }
    //���errTable���иô���ģʽ�����޸�
    auto existTable = errTable.find(parityXOR);
    if(existTable != errTable.end()){
        output = input ^ errTable[parityXOR];
    }else {
        output = input;
        cout << "������࣬�޷��޸�" << endl;
    }
    //printf("\tHammingDecode is ending...\n");
}

/**
�����İ���ʽ
@input ���յ�������
@output �������ʽ
*/
void HammingTest::getParityXOR(bitset<codeLen> &input, bitset<parityLen> &output){
    //printf("getParityXOR is running...\n");
    //���������ת��
	for (int i = 0; i < 39; i++) {
		for (int j = 0; j < 7; j++) {
			adjointMatrix_T[i][j] = adjointMatrix[j][i];
		}
	}
    for(int i  = 0; i < 7; i++){
        output[i] = 0;
        for(int j = 0; j < 39; j++){
            if(input[38 - j] * adjointMatrix[i][j]){
                output.flip(i);
            }
        }
    }
    //cout << output.to_string() << endl;
    //printf("getParityXOR is ending...\n");
}

/**
�Ʊ����������е�1λ���������7λ���ֵ
*/
void HammingTest::setTable(){
    //�����ļ���
    string fileName = "errTableHamming_39_32.txt";
    ofstream fout(fileName, ios::binary);
    fout << "Loc\t" << "XOR\t" << "\n";

    //����
    //cout << enInput << endl;
    //��ָ��һ����Ϣ�� ������Ӧ��У��λȻ��ͨ��ָ����Ӧ��λ����
    //ͨ����һ���� ֮��Ϳ���ֱ�Ӳ�ѯ�ñ�
    HammingEncode(enInput, enOutput);
    //cout << enOutput << endl;

    //����1λ���󣬴���λ����errLoc��
    for(int errLoc = 0; errLoc < codeLen; errLoc++){
        deInput = enOutput;
        deInput.flip(errLoc);

        getParityXOR(deInput, parityXOR);
        bitset<codeLen> tmp;
        tmp.flip(errLoc);
        fout << tmp << "\t" << parityXOR << "\t\n";
    }
}

/**
���������ڴ���ȥ��ӳ�䵽errTable�У��±�Ϊ����ʽ��ֵΪ����λ��
*/
void HammingTest::getTable(){
    //�����ļ���
    string fileName = "errTableHamming_39_32.txt";
    ifstream fin(fileName, ios::binary);
    string tmpStr;
    bitset<codeLen> temp1;
    bitset<parityLen> temp2;
    fin >> tmpStr >> tmpStr; //ȥ��ͷ
    while(!fin.eof()){
        fin >> temp1 >> temp2;
        errTable[temp2] = temp1;
    }
}

/**
Hamming����
*/
void HammingTest::testHamming() {
    cout << "$1:\tsetTable(��������λ�ñ������浽errTableHamming_39_32.txt)" << endl;
    setTable();
    cout << "$2:\tgetTable(��errTableHamming_39_32.txt��ȥ����ģʽ�������ű��浽errTable�����У��±�Ϊ����ʽ��ֵΪ����λ��)" << endl;
    getTable();

    cout << "$3:\t��������������У�\t";
    srand((unsigned int)time(NULL));
    int tmp = 0;
    enInput.reset();
    for (int i = 0; i < dataLen; i ++) {
        tmp = rand() % 2;
        if (tmp) {
            enInput.set(i);
        }
    }
    cout << enInput << endl;
    enOutput.reset();
    HammingEncode(enInput, enOutput);
    cout << "\t�������������֣�\t";
    cout << enOutput << endl;
    bool notEnd = 1;
    while(notEnd){
        cout << "\t���������λ��(0-38),��λ�ں󣬸�λ��ǰ" << endl;
        int errLoc = 0;
        cin >> errLoc;
        deInput = enOutput;
        deInput.flip(errLoc);
        cout << "\tע������Ľ�����Ϣ����Ϊ" << deInput << endl;
        HammingDecode(deInput, deOutput);
        if(deOutput == enOutput){
            cout << "\t�޸��ɹ�" << endl;
            cout << "\t�޸������Ľ�����Ϣ����Ϊ" << deOutput << endl;
        }else{
            cout << "\t�޸�ʧ��" << endl;
        }
    }
}

