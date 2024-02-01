param(
    [string]$fileName
)

# 현재 디렉토리에 있는 파일을 컴파일하기 위한 경로 설정
$sourcePath = ".\$fileName"
# 실행 파일 이름 설정 (확장자 없이)
$executableName = [System.IO.Path]::GetFileNameWithoutExtension($fileName)
# 컴파일된 실행 파일 저장 경로를 현재 디렉토리로 설정
$outputPath = ".\$executableName.exe"

# GCC를 사용해 컴파일
gcc $sourcePath -o $outputPath

# 컴파일 성공 여부 확인
if (Test-Path $outputPath)
{
    # 실행 파일 실행
    & $outputPath
}
else
{
    Write-Host "컴파일에 실패했습니다."
}
