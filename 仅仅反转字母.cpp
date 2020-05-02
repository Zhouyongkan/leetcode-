class Solution {
public:
	string reverseOnlyLetters(string S) {
		char* Sleft = (char*)S.c_str();
		char* Sright = Sleft + (S.size());

		while (Sleft<Sright)
		{
			while (Sleft<Sright)
			{
				if (isalpha(*Sleft))
				{
					break;
				}
				++Sleft;
			}
			while (Sleft<Sright)
			{
				if (isalpha(*Sright))
				{
					break;
				}
				--Sright;
			}

			if (Sleft<Sright)
			{
				swap(*Sleft, *Sright);
				++Sleft;
				--Sright;
			}
		}
		return S;
	}
};