void JDbg_Printf(const char * pText, ...)
{
	// exemple http://stackoverflow.com/questions/1149620/how-to-write-to-the-output-window-in-visual-studio
	
	char buffer[1024];
	va_list arg;
	va_start(arg, pText);
	_vsnprintf_s(buffer, sizeof(buffer), pText, arg);
	va_end(arg);

	OutputDebugString(buffer);
}

void JDbg_Assert( bool state, const char * pText)
{
	if ( !state )
	{
		JDbg_Printf( !pText ? "Error !": pText);
	}
}