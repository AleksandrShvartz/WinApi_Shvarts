#ifndef HEADER_FILE_READER
#define HEADER_FILE_READER

#include<stdio.h>

#define LINE_END '\n'

// ��������� � ����������� � ������, ����������� �� viewer
typedef struct {
    // ��������� �� ������ � ���������� ������
    char* buffer;
    // ������ ������� � ���������� ������
    size_t bufferSize;
    // ��������� �� ������ � ��������� ������ ����� � ������
    size_t* lnEnds;
    // ������ ������� � ��������� ������ ����� (���������� ��������� ����� � ������)
    size_t lnEndsSize;
    // ������ ����� ������� ������ � ������
    size_t maxStrLen;
}reader_t;

/*
    ��������� ��������� reader_t ���������� �����, ������������� ��
    ���������� ������ ��� buffer � lnEnds
    params:
        [out] readerP - ��������� �� ���������, ���� ��������� ���������� �����
        [in] filename - ��� �����, ������� ���� ��������
*/
void WriteFileInReader(reader_t* readerP, char* filename);

/*
    ����������� ������ �������� ���������
    params:
        [out] readerP - ��������� �� ���������, ���� �������� ���������� �����
*/
void ClearReader(reader_t* readerP);

/*
    ����������� ������ �������� ��� �������(buffer � lnEnds) � reader � ��������� ��� �������� ������
    params:
        [out] readerP - ��������� �� ���������, ���� �������� ���������� �����
*/
void EmptyReader(reader_t* readerP);

/*
    ��������� ��������� ������ ������ � NULL
    params:
        [out] readerP - ��������� �� ���������, ���� �������� ���������� �����
*/
void NullifyReader(reader_t* readerP);
#endif
