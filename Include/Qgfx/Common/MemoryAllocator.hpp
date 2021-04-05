#pragma once

namespace Qgfx
{
	class IMemoryAllocator
	{
	public:

		/// Allocates block of memory
		virtual void* Allocate(size_t Size) = 0;

		/// Releases memory
		virtual void Free(void* Ptr) = 0;
	};
}