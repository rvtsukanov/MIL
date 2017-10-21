#include <iostream>
#include <vector>

using namespace std;

class game {
public:

	int m_a;
	int m_b;

	vector<vector<char>> m_field;
	vector<vector<char>> m_field_num;

	game(int a, int b) : m_a(a), m_b(b) {
		initialize();
	};

	void fill(int n_str, char * s) {
		for (int i = 0; i < m_b; i++) {
			m_field[n_str][i] = s[i];
		}
	}

	void initialize() {
		vector<vector<char>> field(m_a);
		vector<vector<char>> field_num(m_a);

		for (int i = 0; i < m_a; i++) {
			for (int j = 0; j < m_b; j++) {
				field[i].push_back('.');
				field_num[i].push_back(0);
			};
		}
	m_field = field;
	m_field_num = field_num;
	}

	void print() {
		for (int i = 0; i < m_a; i++) {
			for (int j = 0; j < m_b; j++) {
				cout << m_field[i][j];
			}
		cout << endl;
		}
	}

	int find_way(int x1, int y1, int x2, int y2) {
		vector<vector<int>> temp_field(m_a);
		for (int i = 0; i < m_a; i++) {
			for (int j = 0; j < m_b; j++) {
				if (m_field[i][j] == '.') {
					temp_field[i][j] = 0;
				}
			}
		}
		int num_steps(0);
		int dx[4] = {+1, 0, -1, 0};
		int dy[4] = {0, -1, 0, +1 };


	}
};

int main() {
	int a(3), b(3);
	char * s = new char;

	//cin >> a >> b;

	game G(a, b);

	for (int i = 0; i < a; i++) {
		cin >> s;
		G.fill(i, s);
	}
	G.print();

	return 0;
}