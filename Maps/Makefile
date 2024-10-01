err: 
	echo ""
	echo "---------------Format errors----------------"
	echo ""

	echo ""
	echo "---------------header-problems--------------\n"
	echo ""
	../bsq Format_error/header_problem/*

	echo ""
	echo "---lines-problems : too long/short----------"
	echo ""
	../bsq Format_error/lines_problems/line_long_short/*


	echo "---lines-problems : lines count not equals header----------"
	echo ""
	../bsq Format_error/lines_problems/lines_count_not_equal_header/*

	echo ""
	echo ""
	echo "---lines-problems : wrong charset----------"
	echo ""
	../bsq Format_error/lines_problems/wrong_char/*

ok :
	../bsq ./OK_maps/*

.SILENT : err ok