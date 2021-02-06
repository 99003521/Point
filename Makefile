src = point.cpp point_test.cpp
project = point
project: $(src)
	g++ $^ -lgtest -lgtest_main -lpthread -o $@
run: project
	./$^
clean:
	rm *.out