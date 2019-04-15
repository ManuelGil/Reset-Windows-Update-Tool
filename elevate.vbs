Set objShell = CreateObject("Shell.Application")
Set objWshShell = WScript.CreateObject("WScript.Shell")
Set objWshProcessEnv = objWshShell.Environment("PROCESS")

strCommandLine = objWshProcessEnv("ELEVATE_CMDLINE")
strApplication = objWshProcessEnv("ELEVATE_APP")
strArguments = Right(strCommandLine, (Len(strCommandLine) - Len(strApplication)))

If (WScript.Arguments.Count >= 1) Then
    objShell.ShellExecute strApplication, strArguments, "", "runas"
Else
    WScript.Quit
End If
