﻿#pragma once

#include <string>
#include <unordered_map>
#include <optional>
#include "stringhelper.h"

namespace Nacos
{
	using namespace Nacos::Utilities;

	class RemoveInstanceRequest : public BaseRequest
	{
	private:
		std::wstring Ip;
		int Port = 0;
		std::wstring ServiceName;
		std::wstring NamespaceId;
		std::wstring ClusterName;
		std::wstring GroupName;
		std::optional<bool> Ephemeral;

		/// <summary>
		/// IP of instance
		/// </summary>
	public:
		std::wstring getIp() const;
		void setIp(const std::wstring &value);

		/// <summary>
		/// Port of instance
		/// </summary>
		int getPort() const;
		void setPort(int value);

		/// <summary>
		/// Service name
		/// </summary>
		std::wstring getServiceName() const;
		void setServiceName(const std::wstring &value);

		/// <summary>
		/// ID of namespace
		/// </summary>
		std::wstring getNamespaceId() const;
		void setNamespaceId(const std::wstring &value);

		/// <summary>
		/// Cluster name
		/// </summary>
		std::wstring getClusterName() const;
		void setClusterName(const std::wstring &value);

		/// <summary>
		/// group name
		/// </summary>
		std::wstring getGroupName() const;
		void setGroupName(const std::wstring &value);

		/// <summary>
		/// if instance is ephemeral
		/// </summary>
		std::optional<bool> getEphemeral() const;
		void setEphemeral(const std::optional<bool> &value);

		void CheckParam() override;

		std::unordered_map<std::wstring, std::wstring> ToDict() override;
	};
}
