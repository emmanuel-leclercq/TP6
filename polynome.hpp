

template<typename T>
bool is_zero(T a){
	return a==0
}

template<typename T>
bool is_one(T a){
	return a==1;
}

bool is_one(double a){return a==0}

template<typename T>
bool is_one(complex<T>){
	return a.first==0 && a.second==0
	}
