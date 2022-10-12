<script>
const N = 4

function printSolution(board)
{
	for(let i = 0; i < N; i++)
	{
		for(let j = 0; j < N; j++)
		{
			document.write(board[i][j], " ")
		}
		document.write("</br>")
	}
}


function isSafe(board, row, col)
{

	for(let i = 0; i < col; i++){
		if(board[row][i] == 1)
			return false
	}

	for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
		if (board[i][j])
			return false

	for (i = row, j = col; j >= 0 && i < N; i++, j--)
		if (board[i][j])
			return false

	return true
}

function solveNQUtil(board, col){
	
	if(col >= N)
		return true

	for(let i=0;i<N;i++){

		if(isSafe(board, i, col)==true){
			
			board[i][col] = 1

			if(solveNQUtil(board, col + 1) == true)
				return true

		
			board[i][col] = 0
		}
	}
	
	return false
}


function solveNQ(){
	let board = [ [0, 0, 0, 0],
			[0, 0, 0, 0],
			[0, 0, 0, 0],
			[0, 0, 0, 0] ]

	if(solveNQUtil(board, 0) == false){
		document.write("Solution does not exist")
		return false
	}

	printSolution(board)
	return true
}

solveNQ()


</script>
