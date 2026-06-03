#pragma once

#include <string>
#include <vector>
#include <memory>

namespace MaxBot {

/**
 * @brief Запрос на настройку подписки WebHook
 */
class SubscriptionRequestBody
{
public:
    typedef std::shared_ptr<SubscriptionRequestBody> Ptr;

    /**
     * @brief URL HTTPS-endpoint вашего бота. Должен начинаться с `https://`
     */
    std::string url;

    /**
     * @brief Список типов событий, которые хочет получать ваш бот.
     *        Полный список смотрите в описании объекта Update
     * @example ["message_created", "bot_started"]
     */
    std::vector<std::string> update_types;

    /**
     * @brief Секрет, который должен быть отправлен в заголовке `X-Max-Bot-Api-Secret` 
     *        в каждом запросе Webhook. Разрешены только символы `A-Z`, `a-z`, `0-9`, и дефис.
     *        Заголовок рекомендован, чтобы запрос поступал из установленного веб-узла
     */
    std::string secret;
};

} // namespace MaxBot
