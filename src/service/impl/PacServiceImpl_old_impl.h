//
// Created by pikachu on 17-8-18.
//

#ifndef SHADOWSOCKS_CLIENT_PACSERVICEIMPL_OLD_IMPL_H
#define SHADOWSOCKS_CLIENT_PACSERVICEIMPL_OLD_IMPL_H


#include <service/PacService.h>
#include "common/QCore.h"
#include "common/QGui.h"
#include "common/QWidgets.h"
#include "common/dtk.h"

class PacServiceImpl_old_impl : public PacService {
public:

    explicit PacServiceImpl_old_impl(QObject *parent = nullptr);

    void setUseLocalPac(bool isLocal) override;

    bool isUseLocalPac() override;

    bool isUseOnlinePac() override;

    void editLocalPacFile() override;

    void editUserRuleForGFWList() override;

    void setSecureLocalPac(bool b) override;

    bool isSecureLocalPac() override;

    void copyLocalPacURL() override;

    void editOnlinePacUrl() override;

private:
};


#endif //SHADOWSOCKS_CLIENT_PACSERVICEIMPL_OLD_IMPL_H
