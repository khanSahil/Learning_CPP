#pragma once

enum status
{
	Pending,
	Approved,
	Cancelled
};

enum class FileError
{
	notfound,
	ok
};

enum class NetworkError
{
	disconnected,
	ok
};