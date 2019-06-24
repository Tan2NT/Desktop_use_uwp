#pragma once
namespace NotificationsComponent
{
	public ref class NotificationHelper sealed
	{
	public:
		NotificationHelper();
		void ShowNotification(Platform::String^ title, Platform::String^ content);
	};
}
