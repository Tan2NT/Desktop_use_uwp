#include "pch.h"
#include "NotificationsHelper.h"

using namespace NotificationsComponent;
using namespace Platform;
using namespace Windows::Data::Xml::Dom;
using namespace Windows::UI::Notifications;

NotificationHelper::NotificationHelper()
{
}

void NotificationHelper::ShowNotification(Platform::String^ title, Platform::String^ content)
{
	//Load the xml
	Platform::String^ xml = "<toast><visual><binding template='ToastGeneric'><text>" + title + " </text><text>" + content + "</text></binding></visual></toast>";
	XmlDocument^ doc = ref new XmlDocument();
	doc->LoadXml(xml);

	// Display toast
	ToastNotification^ toast = ref new ToastNotification(doc);
	ToastNotificationManager::CreateToastNotifier()->Show(toast);
}
